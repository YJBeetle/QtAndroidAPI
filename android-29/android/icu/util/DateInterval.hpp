#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::icu::util
{
	class DateInterval : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DateInterval(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateInterval(QJniObject obj);
		
		// Constructors
		DateInterval(jlong arg0, jlong arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getFromDate() const;
		jlong getToDate() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::icu::util

