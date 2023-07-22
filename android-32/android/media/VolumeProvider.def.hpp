#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class VolumeProvider : public JObject
	{
	public:
		// Fields
		static jint VOLUME_CONTROL_ABSOLUTE();
		static jint VOLUME_CONTROL_FIXED();
		static jint VOLUME_CONTROL_RELATIVE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VolumeProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VolumeProvider(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		VolumeProvider(jint arg0, jint arg1, jint arg2);
		VolumeProvider(jint arg0, jint arg1, jint arg2, JString arg3);
		
		// Methods
		jint getCurrentVolume() const;
		jint getMaxVolume() const;
		jint getVolumeControl() const;
		JString getVolumeControlId() const;
		void onAdjustVolume(jint arg0) const;
		void onSetVolumeTo(jint arg0) const;
		void setCurrentVolume(jint arg0) const;
	};
} // namespace android::media

