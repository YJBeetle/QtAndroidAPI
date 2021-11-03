#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Paint_FontMetrics : public JObject
	{
	public:
		// Fields
		jfloat ascent();
		jfloat bottom();
		jfloat descent();
		jfloat leading();
		jfloat top();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Paint_FontMetrics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Paint_FontMetrics(QAndroidJniObject obj);
		
		// Constructors
		Paint_FontMetrics();
		
		// Methods
	};
} // namespace android::graphics

