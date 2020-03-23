#pragma once

#include <QtAndroidExtras/QAndroidJniObject>

namespace __jni_impl
{
	class __JniBaseClass
	{
	protected:
		QAndroidJniObject __thiz;

	public:
		__JniBaseClass() = default;
		__JniBaseClass(QAndroidJniObject obj) : __thiz(obj) {}

		QAndroidJniObject __jniObject()
		{
			return __thiz;
		}
	};
} // namespace __jni_impl
