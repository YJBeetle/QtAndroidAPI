#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class Session2Command;
}
namespace android::media
{
	class Session2CommandGroup;
}

namespace android::media
{
	class Session2CommandGroup_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Session2CommandGroup_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Session2CommandGroup_Builder(QAndroidJniObject obj);
		
		// Constructors
		Session2CommandGroup_Builder();
		Session2CommandGroup_Builder(android::media::Session2CommandGroup arg0);
		
		// Methods
		android::media::Session2CommandGroup_Builder addCommand(android::media::Session2Command arg0) const;
		android::media::Session2CommandGroup build() const;
		android::media::Session2CommandGroup_Builder removeCommand(android::media::Session2Command arg0) const;
	};
} // namespace android::media

