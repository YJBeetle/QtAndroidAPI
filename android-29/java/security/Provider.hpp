#pragma once

#include "../../__JniBaseClass.hpp"
#include "../util/Dictionary.hpp"
#include "../util/Hashtable.hpp"
#include "../util/Properties.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class ObjectInputStream;
}
namespace java::security
{
	class Provider_Service;
}

namespace java::security
{
	class Provider : public java::util::Properties
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Provider(const char *className, const char *sig, Ts...agv) : java::util::Properties(className, sig, std::forward<Ts>(agv)...) {}
		Provider(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void clear();
		jobject compute(jobject arg0, __JniBaseClass arg1);
		jobject computeIfAbsent(jobject arg0, __JniBaseClass arg1);
		jobject computeIfPresent(jobject arg0, __JniBaseClass arg1);
		QAndroidJniObject configure(jstring arg0);
		QAndroidJniObject elements();
		QAndroidJniObject entrySet();
		void forEach(__JniBaseClass arg0);
		jobject get(jobject arg0);
		jstring getInfo();
		jstring getName();
		jobject getOrDefault(jobject arg0, jobject arg1);
		jstring getProperty(jstring arg0);
		QAndroidJniObject getService(jstring arg0, jstring arg1);
		QAndroidJniObject getServices();
		jdouble getVersion();
		jstring getVersionStr();
		jboolean isConfigured();
		QAndroidJniObject keySet();
		QAndroidJniObject keys();
		void load(java::io::InputStream arg0);
		jobject merge(jobject arg0, jobject arg1, __JniBaseClass arg2);
		jobject put(jobject arg0, jobject arg1);
		void putAll(__JniBaseClass arg0);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jboolean remove(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(__JniBaseClass arg0);
		jstring toString();
		QAndroidJniObject values();
	};
} // namespace java::security

