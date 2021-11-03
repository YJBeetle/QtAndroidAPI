#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class Session2Command;
}
namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class Session2CommandGroup : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Session2CommandGroup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Session2CommandGroup(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getCommands() const;
		jboolean hasCommand(android::media::Session2Command arg0) const;
		jboolean hasCommand(jint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

