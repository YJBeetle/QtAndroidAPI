#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::icu::text
{
	class BidiRun : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BidiRun(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BidiRun(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jbyte getDirection() const;
		jbyte getEmbeddingLevel() const;
		jint getLength() const;
		jint getLimit() const;
		jint getStart() const;
		jboolean isEvenRun() const;
		jboolean isOddRun() const;
		JString toString() const;
	};
} // namespace android::icu::text

