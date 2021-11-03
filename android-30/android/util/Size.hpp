#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class Size : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Size(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Size(QJniObject obj);
		
		// Constructors
		Size(jint arg0, jint arg1);
		
		// Methods
		static android::util::Size parseSize(jstring arg0);
		jboolean equals(jobject arg0);
		jint getHeight();
		jint getWidth();
		jint hashCode();
		jstring toString();
	};
} // namespace android::util

