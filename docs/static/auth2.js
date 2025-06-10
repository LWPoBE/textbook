var app = new Vue({
  el: "#app",
  data: {
  },
  mounted(){
    console.log("checkAuthStatus");
    let key = this.getKey();
    if(key != "1wp0be2025") {
      location.replace("/textbook/auth/")
    }
  },
  methods: {
    getKey() {
      return localStorage.getItem("key");
    },
  },
});