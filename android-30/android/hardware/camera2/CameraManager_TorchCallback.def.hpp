#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::hardware::camera2
{
	class CameraManager_TorchCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraManager_TorchCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraManager_TorchCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CameraManager_TorchCallback();
		
		// Methods
		void onTorchModeChanged(JString arg0, jboolean arg1) const;
		void onTorchModeUnavailable(JString arg0) const;
	};
} // namespace android::hardware::camera2

