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
		jint compareTo(android::icu::text::CollationKey arg0) const;
		jint compareTo(JObject arg0) const;
		jboolean equals(android::icu::text::CollationKey arg0) const;
		jboolean equals(JObject arg0) const;
		android::icu::text::CollationKey getBound(jint arg0, jint arg1) const;
		JString getSourceString() const;
		jint hashCode() const;
		android::icu::text::CollationKey merge(android::icu::text::CollationKey arg0) const;
		JByteArray toByteArray() const;
	};
} // namespace android::icu::text

