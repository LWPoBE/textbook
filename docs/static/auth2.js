var app = new Vue({
  el: "#app",
  data: {
    isAuthorized: false,
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
          console.log("[authUser]", response, response.status);
          if(response.status == 200) {
            this.isAuthorized = true;
            setTimeout(() => {
              Prism.highlightAll();
              if(typeof window.MathJax !== "undefined") {
                MathJax.typesetPromise();
              }
            }, 500);
          } else {
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