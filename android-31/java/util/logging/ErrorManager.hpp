#pragma once

#include "../../../JObject.hpp"

namespace java::lang
{
	class Exception;
}

namespace java::util::logging
{
	class ErrorManager : public JObject
	{
	public:
		// Fields
		static jint CLOSE_FAILURE();
		static jint FLUSH_FAILURE();
		static jint FORMAT_FAILURE();
		static jint GENERIC_FAILURE();
		static jint OPEN_FAILURE();
		static jint WRITE_FAILURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ErrorManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ErrorManager(QAndroidJniObject obj);
		
		// Constructors
		ErrorManager();
		
		// Methods
		void error(jstring arg0, java::lang::Exception arg1, jint arg2);
	};
} // namespace java::util::logging

