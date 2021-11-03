#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::os
{
	class PatternMatcher : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint PATTERN_ADVANCED_GLOB();
		static jint PATTERN_LITERAL();
		static jint PATTERN_PREFIX();
		static jint PATTERN_SIMPLE_GLOB();
		
		// QJniObject forward
		template<typename ...Ts> explicit PatternMatcher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PatternMatcher(QJniObject obj);
		
		// Constructors
		PatternMatcher(android::os::Parcel arg0);
		PatternMatcher(JString arg0, jint arg1);
		
		// Methods
		jint describeContents();
		JString getPath();
		jint getType();
		jboolean match(JString arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

