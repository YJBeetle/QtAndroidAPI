#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::media
{
	class AudioAttributes;
}
namespace android::net
{
	class Uri;
}

namespace android::media
{
	class AsyncPlayer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AsyncPlayer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AsyncPlayer(QJniObject obj);
		
		// Constructors
		AsyncPlayer(jstring arg0);
		
		// Methods
		void play(android::content::Context arg0, android::net::Uri arg1, jboolean arg2, android::media::AudioAttributes arg3);
		void play(android::content::Context arg0, android::net::Uri arg1, jboolean arg2, jint arg3);
		void stop();
	};
} // namespace android::media

