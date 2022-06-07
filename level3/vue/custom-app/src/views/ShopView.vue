<template>
    <div>
        <h2>Shop Page</h2>
        <p><router-link :to="{ name: 'shopdetail', params: { id:1 }}">
            Item one
        </router-link></p>
        <p><router-link :to="{ name: 'shopdetail', params: { id:2 }}">
            item two
</router-link></p>
        
    </div>
</template>
