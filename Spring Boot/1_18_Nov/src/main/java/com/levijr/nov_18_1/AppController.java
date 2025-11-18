package com.levijr.nov_18_1;

import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class AppController {

    @RequestMapping("/greeting")
    public String greeting(){
        return "Hello from the Rest services";
    }

}
