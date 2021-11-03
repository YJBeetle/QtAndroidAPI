#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace android::drm
{
	class DrmInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmInfo(QAndroidJniObject obj);
		
		// Constructors
		DrmInfo(jint arg0, JByteArray arg1, JString arg2);
		DrmInfo(jint arg0, JString arg1, JString arg2);
		
		// Methods
		JObject get(JString arg0);
		JByteArray getData();
		jint getInfoType();
		JString getMimeType();
		JObject iterator();
		JObject keyIterator();
		void put(JString arg0, JObject arg1);
	};
} // namespace android::drm

