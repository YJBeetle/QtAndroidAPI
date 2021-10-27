#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::lang
{
	class ProcessBuilder_Redirect_Type;
}

namespace java::lang
{
	class ProcessBuilder_Redirect : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DISCARD();
		static QAndroidJniObject INHERIT();
		static QAndroidJniObject PIPE();
		
		ProcessBuilder_Redirect(QAndroidJniObject obj);
		// Constructors
		ProcessBuilder_Redirect() = default;
		
		// Methods
		static QAndroidJniObject appendTo(java::io::File arg0);
		static QAndroidJniObject from(java::io::File arg0);
		static QAndroidJniObject to(java::io::File arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject file();
		jint hashCode();
		QAndroidJniObject type();
	};
} // namespace java::lang

