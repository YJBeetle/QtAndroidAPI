#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::speech
{
	class RecognitionPart : public JObject
	{
	public:
		// Fields
		static jint CONFIDENCE_LEVEL_HIGH();
		static jint CONFIDENCE_LEVEL_LOW();
		static jint CONFIDENCE_LEVEL_MEDIUM();
		static jint CONFIDENCE_LEVEL_MEDIUM_HIGH();
		static jint CONFIDENCE_LEVEL_MEDIUM_LOW();
		static jint CONFIDENCE_LEVEL_UNKNOWN();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RecognitionPart(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecognitionPart(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getConfidenceLevel() const;
		JString getFormattedText() const;
		JString getRawText() const;
		jlong getTimestampMillis() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::speech

