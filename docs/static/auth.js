var app = new Vue({
  el: "#app",
  data: {
    key: "",
  },
  mounted(){
  },
  methods: {
    submitKey() {
      console.log("submitKey()", this.key);
      this.setKey(this.key);
      window.location.replace("../");
    },
    setKey(key) {
      localStorage.setItem("key", key);
    },
  },
});