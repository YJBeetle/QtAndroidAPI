#pragma once

#include "./StreamHandler.hpp"

class JArray;
namespace java::io
{
	class File;
}
class JString;
namespace java::nio::channels
{
	class FileChannel;
}
namespace java::util::logging
{
	class LogRecord;
}

namespace java::util::logging
{
	class FileHandler : public java::util::logging::StreamHandler
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileHandler(const char *className, const char *sig, Ts...agv) : java::util::logging::StreamHandler(className, sig, std::forward<Ts>(agv)...) {}
		FileHandler(QAndroidJniObject obj);
		
		// Constructors
		FileHandler();
		FileHandler(JString arg0);
		FileHandler(JString arg0, jboolean arg1);
		FileHandler(JString arg0, jint arg1, jint arg2);
		FileHandler(JString arg0, jint arg1, jint arg2, jboolean arg3);
		FileHandler(JString arg0, jlong arg1, jint arg2, jboolean arg3);
		
		// Methods
		void close();
		void publish(java::util::logging::LogRecord arg0);
	};
} // namespace java::util::logging

