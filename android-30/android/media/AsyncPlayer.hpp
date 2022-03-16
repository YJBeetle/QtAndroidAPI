#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::media
{
	class AsyncPlayer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsyncPlayer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AsyncPlayer(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AsyncPlayer(JString arg0);
		
		// Methods
		void play(android::content::Context arg0, android::net::Uri arg1, jboolean arg2, android::media::AudioAttributes arg3) const;
		void play(android::content::Context arg0, android::net::Uri arg1, jboolean arg2, jint arg3) const;
		void stop() const;
	};
} // namespace android::media

