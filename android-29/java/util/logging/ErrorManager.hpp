#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Exception;
}

namespace java::util::logging
{
	class ErrorManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint CLOSE_FAILURE();
		static jint FLUSH_FAILURE();
		static jint FORMAT_FAILURE();
		static jint GENERIC_FAILURE();
		static jint OPEN_FAILURE();
		static jint WRITE_FAILURE();
		
		ErrorManager(QAndroidJniObject obj);
		// Constructors
		ErrorManager();
		
		// Methods
		void error(jstring arg0, java::lang::Exception arg1, jint arg2);
		void error(const QString &arg0, java::lang::Exception arg1, jint arg2);
	};
} // namespace java::util::logging

