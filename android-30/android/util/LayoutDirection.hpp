#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class LayoutDirection : public JObject
	{
	public:
		// Fields
		static jint INHERIT();
		static jint LOCALE();
		static jint LTR();
		static jint RTL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LayoutDirection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LayoutDirection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::util

