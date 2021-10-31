#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util
{
	class Locale;
}

namespace java::util::logging
{
	class Level : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ALL();
		static QAndroidJniObject CONFIG();
		static QAndroidJniObject FINE();
		static QAndroidJniObject FINER();
		static QAndroidJniObject FINEST();
		static QAndroidJniObject INFO();
		static QAndroidJniObject OFF();
		static QAndroidJniObject SEVERE();
		static QAndroidJniObject WARNING();
		
		Level(QAndroidJniObject obj);
		// Constructors
		Level() = default;
		
		// Methods
		static QAndroidJniObject parse(jstring arg0);
		jboolean equals(jobject arg0);
		jstring getLocalizedName();
		jstring getName();
		jstring getResourceBundleName();
		jint hashCode();
		jint intValue();
		jstring toString();
	};
} // namespace java::util::logging

