#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::nio::channels
{
	class Pipe_SinkChannel;
}
namespace java::nio::channels
{
	class Pipe_SourceChannel;
}

namespace java::nio::channels
{
	class Pipe : public __JniBaseClass
	{
	public:
		// Fields
		
		Pipe(QAndroidJniObject obj);
		// Constructors
		Pipe() = default;
		
		// Methods
		static QAndroidJniObject open();
		QAndroidJniObject sink();
		QAndroidJniObject source();
	};
} // namespace java::nio::channels

