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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProcessBuilder_Redirect(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ProcessBuilder_Redirect(QAndroidJniObject obj);
		
		// Constructors
		
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

