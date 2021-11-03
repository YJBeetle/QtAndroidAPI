#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MicrophoneInfo_Coordinate3F;
}
class JString;

namespace android::media
{
	class MicrophoneInfo : public JObject
	{
	public:
		// Fields
		static jint CHANNEL_MAPPING_DIRECT();
		static jint CHANNEL_MAPPING_PROCESSED();
		static jint DIRECTIONALITY_BI_DIRECTIONAL();
		static jint DIRECTIONALITY_CARDIOID();
		static jint DIRECTIONALITY_HYPER_CARDIOID();
		static jint DIRECTIONALITY_OMNI();
		static jint DIRECTIONALITY_SUPER_CARDIOID();
		static jint DIRECTIONALITY_UNKNOWN();
		static jint GROUP_UNKNOWN();
		static jint INDEX_IN_THE_GROUP_UNKNOWN();
		static jint LOCATION_MAINBODY();
		static jint LOCATION_MAINBODY_MOVABLE();
		static jint LOCATION_PERIPHERAL();
		static jint LOCATION_UNKNOWN();
		static android::media::MicrophoneInfo_Coordinate3F ORIENTATION_UNKNOWN();
		static android::media::MicrophoneInfo_Coordinate3F POSITION_UNKNOWN();
		static jfloat SENSITIVITY_UNKNOWN();
		static jfloat SPL_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit MicrophoneInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MicrophoneInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString getAddress() const;
		JObject getChannelMapping() const;
		JString getDescription() const;
		jint getDirectionality() const;
		JObject getFrequencyResponse() const;
		jint getGroup() const;
		jint getId() const;
		jint getIndexInTheGroup() const;
		jint getLocation() const;
		jfloat getMaxSpl() const;
		jfloat getMinSpl() const;
		android::media::MicrophoneInfo_Coordinate3F getOrientation() const;
		android::media::MicrophoneInfo_Coordinate3F getPosition() const;
		jfloat getSensitivity() const;
		jint getType() const;
	};
} // namespace android::media

