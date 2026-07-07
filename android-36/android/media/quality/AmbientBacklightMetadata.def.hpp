#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::quality
{
	class AmbientBacklightMetadata : public JObject
	{
	public:
		// Fields
		static jint ALGORITHM_NONE();
		static jint ALGORITHM_RLE();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AmbientBacklightMetadata(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AmbientBacklightMetadata(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AmbientBacklightMetadata(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, JIntArray arg6);
		
		// Methods
		jint describeContents() const;
		jint getColorFormat() const;
		jint getCompressionAlgorithm() const;
		jint getHorizontalZonesCount() const;
		JString getPackageName() const;
		jint getSource() const;
		jint getVerticalZonesCount() const;
		JIntArray getZoneColors() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::quality

