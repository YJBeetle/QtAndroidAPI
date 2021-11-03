#pragma once

#include "../../../JObject.hpp"


namespace android::icu::text
{
	class CollationKey : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CollationKey(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CollationKey(QAndroidJniObject obj);
		
		// Constructors
		CollationKey(jstring arg0, jbyteArray arg1);
		
		// Methods
		jint compareTo(android::icu::text::CollationKey arg0);
		jint compareTo(jobject arg0);
		jboolean equals(android::icu::text::CollationKey arg0);
		jboolean equals(jobject arg0);
		android::icu::text::CollationKey getBound(jint arg0, jint arg1);
		jstring getSourceString();
		jint hashCode();
		android::icu::text::CollationKey merge(android::icu::text::CollationKey arg0);
		jbyteArray toByteArray();
	};
} // namespace android::icu::text

