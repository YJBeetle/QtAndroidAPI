#pragma once

#include "../../../JObject.hpp"


namespace android::content::pm
{
	class ActivityInfo_WindowLayout : public JObject
	{
	public:
		// Fields
		jint gravity();
		jint height();
		jfloat heightFraction();
		jint minHeight();
		jint minWidth();
		jint width();
		jfloat widthFraction();
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityInfo_WindowLayout(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityInfo_WindowLayout(QJniObject obj);
		
		// Constructors
		ActivityInfo_WindowLayout(jint arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jint arg5, jint arg6);
		
		// Methods
	};
} // namespace android::content::pm

