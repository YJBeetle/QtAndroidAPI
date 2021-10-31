#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::graphics
{
	class Paint_FontMetricsInt : public __JniBaseClass
	{
	public:
		// Fields
		jint ascent();
		jint bottom();
		jint descent();
		jint leading();
		jint top();
		
		// QJniObject forward
		template<typename ...Ts> explicit Paint_FontMetricsInt(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Paint_FontMetricsInt(QJniObject obj);
		
		// Constructors
		Paint_FontMetricsInt();
		
		// Methods
		jstring toString();
	};
} // namespace android::graphics

