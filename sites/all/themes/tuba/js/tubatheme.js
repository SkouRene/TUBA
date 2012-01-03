(function($) {
Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {
    
    //HIDE LATEST MENU CONTENT
    $("#block-views-forum-block .content, #block-views-begivenheder-block .content").hide();

    //FORUM Foldout
    $("#block-views-forum-block h2").toggle(
      function(){
        $("#block-views-forum-block .content, #block-views-begivenheder-block .content").hide();
        $("#block-views-forum-block .content").show();
      },
        function(){
        $("#block-views-forum-block .content").hide();
      }
    )
    
    //BREVKASSE Foldout
    $("#block-views-begivenheder-block h2").toggle(
      function(){
        $("#block-views-forum-block .content, #block-views-begivenheder-block .content").hide();
        $("#block-views-begivenheder-block .content").show();
      },
        function(){
        $("#block-views-begivenheder-block .content").hide();
      }
    )

  }
};
})(jQuery);