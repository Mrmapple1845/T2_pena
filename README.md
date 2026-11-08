# Taller 2

Andamios para el proyecto ESP-IDF para el Taller 2

**Autor:** Guillermo De La Peña Palomo

## Mapa repositorio

```text
T2_pena
├── CMakeLists.txt          # ESP-IDF project build configuration
├── sdkconfig.default       # Default ESP-IDF configuration
├── main/
│   ├── main.c              # Application entry point
│   └── CMakeLists.txt
├── components/
│   ├── sensor/             # Sensor component
│   ├── led/                # LED component
│   ├── pulsador/           # Push-button component
│   └── consola/            # Console component
└── .vscode/                # VS Code project settings
```

## Pines

| Función | Pin | Nivel activo |
|---|---|---|
| Pulsador | `GPIO_NUM_5` | Pulsado: `0` |
| LED | `GPIO_NUM_4` | Encendido: `1` |
| I2C SDA (datos) | `GPIO_NUM_8` | — |
| I2C SCL (reloj) | `GPIO_NUM_9` | — |

## Configuración

En `menuconfig`, el menú **SEyTR - Taller 2** permite ajustar (`CONFIG_SEYTR_TRABAJO_REGISTRO_MS`): tiempo de
pel trabajo de la tarea `trabajo` rocesador simulado para preparar cada informe, entre 1 y 500 ms (por defecto,
40 ms). Debe ser mestro; si no, el proyecto no compila.
