#pragma once

#include "../../../JObject.hpp"

namespace java::util
{
	class Locale;
}

namespace java::util::logging
{
	class Level : public JObject
	{
	public:
		// Fields
		static java::util::logging::Level ALL();
		static java::util::logging::Level CONFIG();
		static java::util::logging::Level FINE();
		static java::util::logging::Level FINER();
		static java::util::logging::Level FINEST();
		static java::util::logging::Level INFO();
		static java::util::logging::Level OFF();
		static java::util::logging::Level SEVERE();
		static java::util::logging::Level WARNING();
		
		// QJniObject forward
		template<typename ...Ts> explicit Level(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Level(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::logging::Level parse(jstring arg0);
		jboolean equals(jobject arg0);
		jstring getLocalizedName();
		jstring getName();
		jstring getResourceBundleName();
		jint hashCode();
		jint intValue();
		jstring toString();
	};
} // namespace java::util::logging

