const app = Vue.createApp({
    data() {
        return {
            id: 1,
            name: "Kyaw Htin",
            age: 21,
            occupation: "Backend Developer",
            profile: "images/testi_01.png",
            para: '<span style="color: red;">This is a text.</span>',
            seen: true,
            mark: 30,
            students:[
                {name:"mg mg",age :15,gender:"male"},
                {name:"su su",age:25,gender:"female"},
                
                {name:"ko ko",age: 35,gender:"male"},
                
            ],
            username:"",
            money:123324,
        }
    },
    methods: {
        reverse() {
            this.name = this.name.split('').reverse('').join('')
        }
    },
    computed:{
        girl(){
            return this.students.filter(row=> row.gender=="female")
        },
        boy(){
            return this.students.filter(row=> row.gender=="male")
        }
    },
    filters:{
        currencydecimal(value){
         return value.toFixed(2)
    }
    }
})