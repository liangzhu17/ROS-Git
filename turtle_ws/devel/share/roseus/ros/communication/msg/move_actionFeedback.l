;; Auto-generated. Do not edit!


(when (boundp 'communication::move_actionFeedback)
  (if (not (find-package "COMMUNICATION"))
    (make-package "COMMUNICATION"))
  (shadow 'move_actionFeedback (find-package "COMMUNICATION")))
(unless (find-package "COMMUNICATION::MOVE_ACTIONFEEDBACK")
  (make-package "COMMUNICATION::MOVE_ACTIONFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude move_actionFeedback.msg.html


(defclass communication::move_actionFeedback
  :super ros::object
  :slots (_percent_complete ))

(defmethod communication::move_actionFeedback
  (:init
   (&key
    ((:percent_complete __percent_complete) 0.0)
    )
   (send-super :init)
   (setq _percent_complete (float __percent_complete))
   self)
  (:percent_complete
   (&optional __percent_complete)
   (if __percent_complete (setq _percent_complete __percent_complete)) _percent_complete)
  (:serialization-length
   ()
   (+
    ;; float32 _percent_complete
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _percent_complete
       (sys::poke _percent_complete (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _percent_complete
     (setq _percent_complete (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get communication::move_actionFeedback :md5sum-) "d342375c60a5a58d3bc32664070a1368")
(setf (get communication::move_actionFeedback :datatype-) "communication/move_actionFeedback")
(setf (get communication::move_actionFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define a feedback message
float32 percent_complete


")



(provide :communication/move_actionFeedback "d342375c60a5a58d3bc32664070a1368")


