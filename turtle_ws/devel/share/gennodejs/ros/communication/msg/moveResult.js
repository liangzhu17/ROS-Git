// Auto-generated. Do not edit!

// (in-package communication.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class moveResult {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.total_time_used = null;
    }
    else {
      if (initObj.hasOwnProperty('total_time_used')) {
        this.total_time_used = initObj.total_time_used
      }
      else {
        this.total_time_used = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type moveResult
    // Serialize message field [total_time_used]
    bufferOffset = _serializer.uint32(obj.total_time_used, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type moveResult
    let len;
    let data = new moveResult(null);
    // Deserialize message field [total_time_used]
    data.total_time_used = _deserializer.uint32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'communication/moveResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7d783291dfe0333a693a075000a0e15a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Define the result
    uint32 total_time_used
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new moveResult(null);
    if (msg.total_time_used !== undefined) {
      resolved.total_time_used = msg.total_time_used;
    }
    else {
      resolved.total_time_used = 0
    }

    return resolved;
    }
};

module.exports = moveResult;
