#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Session2CommandGroup_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Session2CommandGroup_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Session2CommandGroup_Builder(QAndroidJniObject obj);
		
		// Constructors
		Session2CommandGroup_Builder();
		Session2CommandGroup_Builder(android::media::Session2CommandGroup arg0);
		
		// Methods
		android::media::Session2CommandGroup_Builder addCommand(android::media::Session2Command arg0);
		android::media::Session2CommandGroup build();
		android::media::Session2CommandGroup_Builder removeCommand(android::media::Session2Command arg0);
	};
} // namespace android::media

