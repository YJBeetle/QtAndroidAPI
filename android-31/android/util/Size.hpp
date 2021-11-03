#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::util
{
	class Size : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Size(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Size(QAndroidJniObject obj);
		
		// Constructors
		Size(jint arg0, jint arg1);
		
		// Methods
		static android::util::Size parseSize(JString arg0);
		jboolean equals(JObject arg0);
		jint getHeight();
		jint getWidth();
		jint hashCode();
		JString toString();
	};
} // namespace android::util

