#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::graphics
{
	class Paint_FontMetrics : public __JniBaseClass
	{
	public:
		// Fields
		jfloat ascent();
		jfloat bottom();
		jfloat descent();
		jfloat leading();
		jfloat top();
		
		// QJniObject forward
		template<typename ...Ts> explicit Paint_FontMetrics(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Paint_FontMetrics(QJniObject obj);
		
		// Constructors
		Paint_FontMetrics();
		
		// Methods
	};
} // namespace android::graphics

