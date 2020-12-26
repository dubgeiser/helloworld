HelloWorld = {
    run = function()
        io.write("Hello, ", HelloWorld.get_name(), "\n")
    end,

    get_name = function()
        name = ""
        while name == "" do
            io.write("Please enter your name: ")
            name = io.read()
        end
        return name
    end
}


h = HelloWorld
h.run()
