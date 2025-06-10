var app = new Vue({
  el: "#app",
  data: {
  },
  mounted(){
    this.authUser();
  },
  methods: {
    authUser() {
      var api = "https://cocolab.yukimat.jp/lwpobe/";
      var query = { key: this.getKey() };
      axios
        .post(api, query, { timeout: 10000 })
        .then(response => {
          console.log("[authUser]", response, response.data.status);
          if(response.status != 200) {
            location.replace("/textbook/auth/");
          }
        }).catch(err => {
          console.log("[authUser] error", err);
          location.replace("/textbook/auth/");
        });
    },
    getKey() {
      return localStorage.getItem("key");
    },
  },
});