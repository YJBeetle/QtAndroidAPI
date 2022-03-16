#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::media
{
	class MediaParser_SeekPoint : public JObject
	{
	public:
		// Fields
		static android::media::MediaParser_SeekPoint START();
		jlong position();
		jlong timeMicros();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaParser_SeekPoint(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaParser_SeekPoint(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::media

