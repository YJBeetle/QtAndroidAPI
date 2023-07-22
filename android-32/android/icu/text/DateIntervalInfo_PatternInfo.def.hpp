#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::icu::text
{
	class DateIntervalInfo_PatternInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateIntervalInfo_PatternInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateIntervalInfo_PatternInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DateIntervalInfo_PatternInfo(JString arg0, JString arg1, jboolean arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jboolean firstDateInPtnIsLaterDate() const;
		JString getFirstPart() const;
		JString getSecondPart() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::icu::text

