#include "./TimeUnit.hpp"
#include "./CompletableFuture.hpp"

namespace java::util::concurrent
{
	// Fields
	
	CompletableFuture::CompletableFuture(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CompletableFuture::CompletableFuture()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CompletableFuture",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CompletableFuture::allOf(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"allOf",
			"([Ljava/util/concurrent/CompletableFuture;)Ljava/util/concurrent/CompletableFuture;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::anyOf(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"anyOf",
			"([Ljava/util/concurrent/CompletableFuture;)Ljava/util/concurrent/CompletableFuture;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::completedFuture(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"completedFuture",
			"(Ljava/lang/Object;)Ljava/util/concurrent/CompletableFuture;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::completedStage(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"completedStage",
			"(Ljava/lang/Object;)Ljava/util/concurrent/CompletionStage;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"delayedExecutor",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Executor;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"delayedExecutor",
			"(JLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/Executor;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::failedFuture(jthrowable arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"failedFuture",
			"(Ljava/lang/Throwable;)Ljava/util/concurrent/CompletableFuture;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::failedStage(jthrowable arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"failedStage",
			"(Ljava/lang/Throwable;)Ljava/util/concurrent/CompletionStage;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::runAsync(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"runAsync",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"runAsync",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::supplyAsync(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"supplyAsync",
			"(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::supplyAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"supplyAsync",
			"(Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::acceptEither(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"acceptEither",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::acceptEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"acceptEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::acceptEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"acceptEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::applyToEither(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"applyToEither",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::applyToEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"applyToEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::applyToEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"applyToEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean CompletableFuture::cancel(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	jboolean CompletableFuture::complete(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"complete",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::completeAsync(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"completeAsync",
			"(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::completeAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"completeAsync",
			"(Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean CompletableFuture::completeExceptionally(jthrowable arg0)
	{
		return __thiz.callMethod<jboolean>(
			"completeExceptionally",
			"(Ljava/lang/Throwable;)Z",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::completeOnTimeout(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callObjectMethod(
			"completeOnTimeout",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::copy()
	{
		return __thiz.callObjectMethod(
			"copy",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	QAndroidJniObject CompletableFuture::defaultExecutor()
	{
		return __thiz.callObjectMethod(
			"defaultExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	QAndroidJniObject CompletableFuture::exceptionally(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"exceptionally",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyAsync(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"exceptionallyAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"exceptionallyAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyCompose(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"exceptionallyCompose",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyComposeAsync(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"exceptionallyComposeAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyComposeAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"exceptionallyComposeAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jobject CompletableFuture::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject CompletableFuture::get(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject CompletableFuture::getNow(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"getNow",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint CompletableFuture::getNumberOfDependents()
	{
		return __thiz.callMethod<jint>(
			"getNumberOfDependents",
			"()I"
		);
	}
	QAndroidJniObject CompletableFuture::handle(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"handle",
			"(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::handleAsync(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"handleAsync",
			"(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::handleAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"handleAsync",
			"(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean CompletableFuture::isCancelled()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean CompletableFuture::isCompletedExceptionally()
	{
		return __thiz.callMethod<jboolean>(
			"isCompletedExceptionally",
			"()Z"
		);
	}
	jboolean CompletableFuture::isDone()
	{
		return __thiz.callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	jobject CompletableFuture::join()
	{
		return __thiz.callObjectMethod(
			"join",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject CompletableFuture::minimalCompletionStage()
	{
		return __thiz.callObjectMethod(
			"minimalCompletionStage",
			"()Ljava/util/concurrent/CompletionStage;"
		);
	}
	QAndroidJniObject CompletableFuture::newIncompleteFuture()
	{
		return __thiz.callObjectMethod(
			"newIncompleteFuture",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	void CompletableFuture::obtrudeException(jthrowable arg0)
	{
		__thiz.callMethod<void>(
			"obtrudeException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void CompletableFuture::obtrudeValue(jobject arg0)
	{
		__thiz.callMethod<void>(
			"obtrudeValue",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::orTimeout(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"orTimeout",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterBoth(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"runAfterBoth",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterBothAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"runAfterBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterBothAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"runAfterBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterEither(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"runAfterEither",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"runAfterEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"runAfterEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAccept(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenAccept",
			"(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptAsync(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenAcceptAsync",
			"(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenAcceptAsync",
			"(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptBoth(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenAcceptBoth",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptBothAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenAcceptBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptBothAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"thenAcceptBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenApply(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenApply",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenApplyAsync(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenApplyAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenApplyAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenApplyAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenCombine(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenCombine",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenCombineAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenCombineAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenCombineAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"thenCombineAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenCompose(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenCompose",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenComposeAsync(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenComposeAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenComposeAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenComposeAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenRun(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenRun",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenRunAsync(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenRunAsync",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenRunAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenRunAsync",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::toCompletableFuture()
	{
		return __thiz.callObjectMethod(
			"toCompletableFuture",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	jstring CompletableFuture::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CompletableFuture::whenComplete(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"whenComplete",
			"(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::whenCompleteAsync(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"whenCompleteAsync",
			"(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::whenCompleteAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"whenCompleteAsync",
			"(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::util::concurrent

