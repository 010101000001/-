//
//  ACTION_CHARGING.swift
//  
//
//  Created by Andres Barbudo Rodriguez on 2/14/22.
//

import Foundation

func ACTION_CHARGING(public, static, final) -> Bool {
    var isCharging = 10
    func add() {
        isCharging +=ACTION_DISCHARGING
    }
    add()
    return isCharging
}
typealias ACTION_CHARGING = android.os.action.ACTION_DISCHARGING
