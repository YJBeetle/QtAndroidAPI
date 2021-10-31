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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Level(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Level(QAndroidJniObject obj);
		
		// Constructors
		
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

