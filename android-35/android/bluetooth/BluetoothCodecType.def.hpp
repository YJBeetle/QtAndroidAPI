#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::bluetooth
{
	class BluetoothCodecType : public JObject
	{
	public:
		// Fields
		static jlong CODEC_ID_AAC();
		static jlong CODEC_ID_APTX();
		static jlong CODEC_ID_APTX_HD();
		static jlong CODEC_ID_LDAC();
		static jlong CODEC_ID_OPUS();
		static jlong CODEC_ID_SBC();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothCodecType(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothCodecType(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jlong getCodecId() const;
		JString getCodecName() const;
		jint hashCode() const;
		jboolean isMandatoryCodec() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth

