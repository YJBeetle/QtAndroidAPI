#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::renderscript
{
	class RenderScript;
}

namespace android::renderscript
{
	class BaseObj : public __JniBaseClass
	{
	public:
		// Fields
		
		BaseObj(QAndroidJniObject obj);
		// Constructors
		BaseObj() = default;
		
		// Methods
		void destroy();
		jboolean equals(jobject arg0);
		jstring getName();
		jint hashCode();
		void setName(jstring arg0);
		void setName(const QString &arg0);
	};
} // namespace android::renderscript

