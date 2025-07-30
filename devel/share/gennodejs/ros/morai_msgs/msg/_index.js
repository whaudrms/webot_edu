
"use strict";

let FaultStatusInfo_Sensor = require('./FaultStatusInfo_Sensor.js');
let EgoVehicleStatusExtended = require('./EgoVehicleStatusExtended.js');
let EventInfo = require('./EventInfo.js');
let MapSpecIndex = require('./MapSpecIndex.js');
let FaultStatusInfo_Overall = require('./FaultStatusInfo_Overall.js');
let MoraiTLInfo = require('./MoraiTLInfo.js');
let VehicleSpecIndex = require('./VehicleSpecIndex.js');
let ObjectStatusList = require('./ObjectStatusList.js');
let PRStatus = require('./PRStatus.js');
let SensorPosControl = require('./SensorPosControl.js');
let MapSpec = require('./MapSpec.js');
let SyncModeCtrlCmd = require('./SyncModeCtrlCmd.js');
let WoowaDillyStatus = require('./WoowaDillyStatus.js');
let ExternalForce = require('./ExternalForce.js');
let SaveSensorData = require('./SaveSensorData.js');
let SkidSteer6wUGVCtrlCmd = require('./SkidSteer6wUGVCtrlCmd.js');
let MultiPlayEventResponse = require('./MultiPlayEventResponse.js');
let Obstacle = require('./Obstacle.js');
let Transforms = require('./Transforms.js');
let EgoDdVehicleStatus = require('./EgoDdVehicleStatus.js');
let GVDirectCmd = require('./GVDirectCmd.js');
let RadarDetections = require('./RadarDetections.js');
let MultiEgoSetting = require('./MultiEgoSetting.js');
let WaitForTickResponse = require('./WaitForTickResponse.js');
let ReplayInfo = require('./ReplayInfo.js');
let SyncModeInfo = require('./SyncModeInfo.js');
let Obstacles = require('./Obstacles.js');
let MoraiTLIndex = require('./MoraiTLIndex.js');
let VelocityCmd = require('./VelocityCmd.js');
let TrafficLight = require('./TrafficLight.js');
let TOF = require('./TOF.js');
let GhostMessage = require('./GhostMessage.js');
let ShipCtrlCmd = require('./ShipCtrlCmd.js');
let GeoVector3Message = require('./GeoVector3Message.js');
let FaultStatusInfo_Vehicle = require('./FaultStatusInfo_Vehicle.js');
let MultiPlayEventRequest = require('./MultiPlayEventRequest.js');
let ScenarioLoad = require('./ScenarioLoad.js');
let SyncModeCmdResponse = require('./SyncModeCmdResponse.js');
let WheelControl = require('./WheelControl.js');
let ERP42Info = require('./ERP42Info.js');
let UGVServeSkidCtrlCmd = require('./UGVServeSkidCtrlCmd.js');
let CtrlCmd = require('./CtrlCmd.js');
let VehicleCollision = require('./VehicleCollision.js');
let SkidSteer6wUGVStatus = require('./SkidSteer6wUGVStatus.js');
let WaitForTick = require('./WaitForTick.js');
let SkateboardStatus = require('./SkateboardStatus.js');
let DillyCmdResponse = require('./DillyCmdResponse.js');
let ObjectStatus = require('./ObjectStatus.js');
let GVStateCmd = require('./GVStateCmd.js');
let RobotState = require('./RobotState.js');
let SyncModeAddObject = require('./SyncModeAddObject.js');
let FaultInjection_Response = require('./FaultInjection_Response.js');
let SyncModeResultResponse = require('./SyncModeResultResponse.js');
let SyncModeSetGear = require('./SyncModeSetGear.js');
let IntscnTL = require('./IntscnTL.js');
let GetTrafficLightStatus = require('./GetTrafficLightStatus.js');
let ObjectStatusListExtended = require('./ObjectStatusListExtended.js');
let EgoVehicleStatus = require('./EgoVehicleStatus.js');
let SyncModeScenarioLoad = require('./SyncModeScenarioLoad.js');
let SyncModeRemoveObject = require('./SyncModeRemoveObject.js');
let RobotOutput = require('./RobotOutput.js');
let FaultInjection_Sensor = require('./FaultInjection_Sensor.js');
let SetTrafficLight = require('./SetTrafficLight.js');
let RadarDetection = require('./RadarDetection.js');
let MoraiSimProcStatus = require('./MoraiSimProcStatus.js');
let SkateboardCtrlCmd = require('./SkateboardCtrlCmd.js');
let VehicleSpec = require('./VehicleSpec.js');
let SVADC = require('./SVADC.js');
let FaultStatusInfo = require('./FaultStatusInfo.js');
let CollisionData = require('./CollisionData.js');
let NpcGhostCmd = require('./NpcGhostCmd.js');
let FaultInjection_Controller = require('./FaultInjection_Controller.js');
let ShipState = require('./ShipState.js');
let SyncModeCmd = require('./SyncModeCmd.js');
let IntersectionStatus = require('./IntersectionStatus.js');
let Conveyor = require('./Conveyor.js');
let ManipulatorControl = require('./ManipulatorControl.js');
let MoraiSimProcHandle = require('./MoraiSimProcHandle.js');
let VehicleCollisionData = require('./VehicleCollisionData.js');
let MoraiSrvResponse = require('./MoraiSrvResponse.js');
let FaultInjection_Tire = require('./FaultInjection_Tire.js');
let ObjectStatusExtended = require('./ObjectStatusExtended.js');
let DillyCmd = require('./DillyCmd.js');
let Lamps = require('./Lamps.js');
let DdCtrlCmd = require('./DdCtrlCmd.js');
let PREvent = require('./PREvent.js');
let PRCtrlCmd = require('./PRCtrlCmd.js');
let NpcGhostInfo = require('./NpcGhostInfo.js');
let CMDConveyor = require('./CMDConveyor.js');
let GPSMessage = require('./GPSMessage.js');
let IntersectionControl = require('./IntersectionControl.js');

module.exports = {
  FaultStatusInfo_Sensor: FaultStatusInfo_Sensor,
  EgoVehicleStatusExtended: EgoVehicleStatusExtended,
  EventInfo: EventInfo,
  MapSpecIndex: MapSpecIndex,
  FaultStatusInfo_Overall: FaultStatusInfo_Overall,
  MoraiTLInfo: MoraiTLInfo,
  VehicleSpecIndex: VehicleSpecIndex,
  ObjectStatusList: ObjectStatusList,
  PRStatus: PRStatus,
  SensorPosControl: SensorPosControl,
  MapSpec: MapSpec,
  SyncModeCtrlCmd: SyncModeCtrlCmd,
  WoowaDillyStatus: WoowaDillyStatus,
  ExternalForce: ExternalForce,
  SaveSensorData: SaveSensorData,
  SkidSteer6wUGVCtrlCmd: SkidSteer6wUGVCtrlCmd,
  MultiPlayEventResponse: MultiPlayEventResponse,
  Obstacle: Obstacle,
  Transforms: Transforms,
  EgoDdVehicleStatus: EgoDdVehicleStatus,
  GVDirectCmd: GVDirectCmd,
  RadarDetections: RadarDetections,
  MultiEgoSetting: MultiEgoSetting,
  WaitForTickResponse: WaitForTickResponse,
  ReplayInfo: ReplayInfo,
  SyncModeInfo: SyncModeInfo,
  Obstacles: Obstacles,
  MoraiTLIndex: MoraiTLIndex,
  VelocityCmd: VelocityCmd,
  TrafficLight: TrafficLight,
  TOF: TOF,
  GhostMessage: GhostMessage,
  ShipCtrlCmd: ShipCtrlCmd,
  GeoVector3Message: GeoVector3Message,
  FaultStatusInfo_Vehicle: FaultStatusInfo_Vehicle,
  MultiPlayEventRequest: MultiPlayEventRequest,
  ScenarioLoad: ScenarioLoad,
  SyncModeCmdResponse: SyncModeCmdResponse,
  WheelControl: WheelControl,
  ERP42Info: ERP42Info,
  UGVServeSkidCtrlCmd: UGVServeSkidCtrlCmd,
  CtrlCmd: CtrlCmd,
  VehicleCollision: VehicleCollision,
  SkidSteer6wUGVStatus: SkidSteer6wUGVStatus,
  WaitForTick: WaitForTick,
  SkateboardStatus: SkateboardStatus,
  DillyCmdResponse: DillyCmdResponse,
  ObjectStatus: ObjectStatus,
  GVStateCmd: GVStateCmd,
  RobotState: RobotState,
  SyncModeAddObject: SyncModeAddObject,
  FaultInjection_Response: FaultInjection_Response,
  SyncModeResultResponse: SyncModeResultResponse,
  SyncModeSetGear: SyncModeSetGear,
  IntscnTL: IntscnTL,
  GetTrafficLightStatus: GetTrafficLightStatus,
  ObjectStatusListExtended: ObjectStatusListExtended,
  EgoVehicleStatus: EgoVehicleStatus,
  SyncModeScenarioLoad: SyncModeScenarioLoad,
  SyncModeRemoveObject: SyncModeRemoveObject,
  RobotOutput: RobotOutput,
  FaultInjection_Sensor: FaultInjection_Sensor,
  SetTrafficLight: SetTrafficLight,
  RadarDetection: RadarDetection,
  MoraiSimProcStatus: MoraiSimProcStatus,
  SkateboardCtrlCmd: SkateboardCtrlCmd,
  VehicleSpec: VehicleSpec,
  SVADC: SVADC,
  FaultStatusInfo: FaultStatusInfo,
  CollisionData: CollisionData,
  NpcGhostCmd: NpcGhostCmd,
  FaultInjection_Controller: FaultInjection_Controller,
  ShipState: ShipState,
  SyncModeCmd: SyncModeCmd,
  IntersectionStatus: IntersectionStatus,
  Conveyor: Conveyor,
  ManipulatorControl: ManipulatorControl,
  MoraiSimProcHandle: MoraiSimProcHandle,
  VehicleCollisionData: VehicleCollisionData,
  MoraiSrvResponse: MoraiSrvResponse,
  FaultInjection_Tire: FaultInjection_Tire,
  ObjectStatusExtended: ObjectStatusExtended,
  DillyCmd: DillyCmd,
  Lamps: Lamps,
  DdCtrlCmd: DdCtrlCmd,
  PREvent: PREvent,
  PRCtrlCmd: PRCtrlCmd,
  NpcGhostInfo: NpcGhostInfo,
  CMDConveyor: CMDConveyor,
  GPSMessage: GPSMessage,
  IntersectionControl: IntersectionControl,
};
