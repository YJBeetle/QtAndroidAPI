#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace android::icu::text
{
	class CollationKey : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CollationKey(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CollationKey(QJniObject obj);
		
		// Constructors
		CollationKey(JString arg0, JByteArray arg1);
		
		// Methods
		jint compareTo(android::icu::text::CollationKey arg0);
		jint compareTo(JObject arg0);
		jboolean equals(android::icu::text::CollationKey arg0);
		jboolean equals(JObject arg0);
		android::icu::text::CollationKey getBound(jint arg0, jint arg1);
		JString getSourceString();
		jint hashCode();
		android::icu::text::CollationKey merge(android::icu::text::CollationKey arg0);
		JByteArray toByteArray();
	};
} // namespace android::icu::text

