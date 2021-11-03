#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class AssetFileDescriptor;
}
namespace java::io
{
	class FileDescriptor;
}
class JString;

namespace android::media
{
	class SoundPool : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SoundPool(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SoundPool(QJniObject obj);
		
		// Constructors
		SoundPool(jint arg0, jint arg1, jint arg2);
		
		// Methods
		void autoPause();
		void autoResume();
		jint load(android::content::res::AssetFileDescriptor arg0, jint arg1);
		jint load(JString arg0, jint arg1);
		jint load(android::content::Context arg0, jint arg1, jint arg2);
		jint load(java::io::FileDescriptor arg0, jlong arg1, jlong arg2, jint arg3);
		void pause(jint arg0);
		jint play(jint arg0, jfloat arg1, jfloat arg2, jint arg3, jint arg4, jfloat arg5);
		void release();
		void resume(jint arg0);
		void setLoop(jint arg0, jint arg1);
		void setOnLoadCompleteListener(JObject arg0);
		void setPriority(jint arg0, jint arg1);
		void setRate(jint arg0, jfloat arg1);
		void setVolume(jint arg0, jfloat arg1, jfloat arg2);
		void stop(jint arg0);
		jboolean unload(jint arg0);
	};
} // namespace android::media

