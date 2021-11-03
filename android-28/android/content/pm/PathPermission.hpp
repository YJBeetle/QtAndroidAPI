#pragma once

#include "../../os/PatternMatcher.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class PathPermission : public android::os::PatternMatcher
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PathPermission(const char *className, const char *sig, Ts...agv) : android::os::PatternMatcher(className, sig, std::forward<Ts>(agv)...) {}
		PathPermission(QAndroidJniObject obj);
		
		// Constructors
		PathPermission(android::os::Parcel arg0);
		PathPermission(JString arg0, jint arg1, JString arg2, JString arg3);
		
		// Methods
		JString getReadPermission() const;
		JString getWritePermission() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

