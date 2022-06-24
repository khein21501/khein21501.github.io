<template>
  <div class="home">
    <img alt="Vue logo" src="../assets/logo.png">
    <HelloWorld msg="Welcome to Your Vue.js App"/>
    <PartFile></PartFile>
  </div>
</template>

<script>
// @ is an alias to /src

import PartFile from '../components/PartFile.vue'

export default {
  name: 'HomeView',
  components: {
    PartFile
  }
}

</script>
